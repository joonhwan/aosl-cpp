#include "aoslcpp/algorithm/edition.hpp"

#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>

#include "aosl/aosl.hpp"

namespace aoslcpp
{
	const std::string DEFAULT_SEQUENCE_ID_PREFIX( "sequence-" );
	const std::string DEFAULT_FIRST_STAGE_NAME( "stage_0" );

	std::unique_ptr< aosl::Sequence > make_empty_sequence( const std::string& sequence_name
														, const double canvas_width, const double canvas_height, const double canvas_depth
														, const std::string& sequence_id
														, const std::string& fist_stage_id
														)
	{
		auto library = std::auto_ptr<aosl::Library>( new aosl::Library() );

		auto area= std::auto_ptr<aosl::Spatial_area>( new aosl::Canvas::AreaType );
		area->x( canvas_width );
		area->y( canvas_height );
		area->z( canvas_depth );

		auto objects= std::auto_ptr<aosl::Object_list>( new aosl::Canvas::ObjectsType );
		auto canvas = std::auto_ptr<aosl::Canvas>( new aosl::Canvas( area, objects ) );

		auto navigation = std::auto_ptr<aosl::Navigation>( new aosl::Navigation() );
		auto moves = std::auto_ptr<aosl::Story::MovesType>( new aosl::Story::MovesType() );

		const std::string root_stage_id= fist_stage_id.empty() ? DEFAULT_FIRST_STAGE_NAME : fist_stage_id;
		auto root_stage = std::auto_ptr<aosl::Stage>( new aosl::Stage( aosl::Stage_id(root_stage_id) ) );

		auto stages = std::auto_ptr<aosl::Story::StagesType>( new aosl::Story::StagesType() );
		stages->stage().push_back( root_stage );

		auto story = std::auto_ptr<aosl::Story>( new aosl::Story( stages, moves, aosl::Stage_ref(root_stage_id) ) );

		auto unique_id = aosl::Unique_id( sequence_id );

		if( sequence_id.empty() )
		{
			static boost::uuids::random_generator new_sequence_id_generator;
			unique_id = aosl::Unique_id( DEFAULT_SEQUENCE_ID_PREFIX + to_string( new_sequence_id_generator() ) );
		}
		
		return std::unique_ptr< aosl::Sequence >( new aosl::Sequence( library, canvas, story, sequence_name, unique_id ) );
	}

}