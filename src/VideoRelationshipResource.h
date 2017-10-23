/*
 * VideoRelationshipResource.h
 *
 * 
 */

#ifndef _VideoRelationshipResource_H_
#define _VideoRelationshipResource_H_


#include <string>
#include "SimpleReferenceResource«long».h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class VideoRelationshipResource : public Object {
public:
	/*! \brief Constructor.
	 */
	VideoRelationshipResource();
	VideoRelationshipResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VideoRelationshipResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The owner of the relationship
	 */
	SimpleReferenceResource«long» getFrom();

	/*! \brief Set The owner of the relationship
	 */
	void setFrom(SimpleReferenceResource«long»  from);
	/*! \brief Get The id of the relationship
	 */
	long long getId();

	/*! \brief Set The id of the relationship
	 */
	void setId(long long  id);
	/*! \brief Get Details about the relationship such as type or other information. Max length 10 characters
	 */
	std::string getRelationshipDetails();

	/*! \brief Set Details about the relationship such as type or other information. Max length 10 characters
	 */
	void setRelationshipDetails(std::string  relationship_details);
	/*! \brief Get The target of the relationship.
	 */
	SimpleReferenceResource«long» getTo();

	/*! \brief Set The target of the relationship.
	 */
	void setTo(SimpleReferenceResource«long»  to);

private:
	SimpleReferenceResource«long» from;
	long long id;
	std::string relationship_details;
	SimpleReferenceResource«long» to;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VideoRelationshipResource_H_ */
