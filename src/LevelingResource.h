/*
 * LevelingResource.h
 *
 * 
 */

#ifndef _LevelingResource_H_
#define _LevelingResource_H_


#include <string>
#include "Property.h"
#include "TierResource.h"
#include <list>
#include <map>
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

class LevelingResource : public Object {
public:
	/*! \brief Constructor.
	 */
	LevelingResource();
	LevelingResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LevelingResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get The date the leveling schema was created
	 */
	long long getCreatedDate();

	/*! \brief Set The date the leveling schema was created
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The description of the leveling schema
	 */
	std::string getDescription();

	/*! \brief Set The description of the leveling schema
	 */
	void setDescription(std::string  description);
	/*! \brief Get The name of the leveling schema.  IMMUTABLE
	 */
	std::string getName();

	/*! \brief Set The name of the leveling schema.  IMMUTABLE
	 */
	void setName(std::string  name);
	/*! \brief Get A set of tiers that contain experience boundaries
	 */
	std::list<TierResource> getTiers();

	/*! \brief Set A set of tiers that contain experience boundaries
	 */
	void setTiers(std::list <TierResource> tiers);
	/*! \brief Get The date the leveling schema was updated
	 */
	long long getUpdatedDate();

	/*! \brief Set The date the leveling schema was updated
	 */
	void setUpdatedDate(long long  updated_date);

private:
	std::map <std::string, std::string>additional_properties;
	long long created_date;
	std::string description;
	std::string name;
	std::list <TierResource>tiers;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LevelingResource_H_ */
