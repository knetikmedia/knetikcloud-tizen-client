/*
 * ChallengeActivityResource.h
 *
 * 
 */

#ifndef _ChallengeActivityResource_H_
#define _ChallengeActivityResource_H_


#include <string>
#include "ActivityEntitlementResource.h"
#include "CoreChallengeActivitySettings.h"
#include "Property.h"
#include "RewardSetResource.h"
#include "SelectedSettingResource.h"
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

class ChallengeActivityResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ChallengeActivityResource();
	ChallengeActivityResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ChallengeActivityResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the activity
	 */
	long long getActivityId();

	/*! \brief Set The id of the activity
	 */
	void setActivityId(long long  activity_id);
	/*! \brief Get A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get The id of the challenge
	 */
	long long getChallengeId();

	/*! \brief Set The id of the challenge
	 */
	void setChallengeId(long long  challenge_id);
	/*! \brief Get Defines core settings about the activity that affect how it can be created/played by users. Values may be left null to inherit from parent activity.
	 */
	CoreChallengeActivitySettings getCoreSettings();

	/*! \brief Set Defines core settings about the activity that affect how it can be created/played by users. Values may be left null to inherit from parent activity.
	 */
	void setCoreSettings(CoreChallengeActivitySettings  core_settings);
	/*! \brief Get The entitlement item needed to participate in the activity as part of this event. Null indicates free entry. When creating/updating only id is used. Item must be pre-existing
	 */
	ActivityEntitlementResource getEntitlement();

	/*! \brief Set The entitlement item needed to participate in the activity as part of this event. Null indicates free entry. When creating/updating only id is used. Item must be pre-existing
	 */
	void setEntitlement(ActivityEntitlementResource  entitlement);
	/*! \brief Get The unique ID for this resource
	 */
	long long getId();

	/*! \brief Set The unique ID for this resource
	 */
	void setId(long long  id);
	/*! \brief Get The rewards to give at the end of each occurence of the activity. When creating/updating only id is used. Reward set must be pre-existing
	 */
	RewardSetResource getRewardSet();

	/*! \brief Set The rewards to give at the end of each occurence of the activity. When creating/updating only id is used. Reward set must be pre-existing
	 */
	void setRewardSet(RewardSetResource  reward_set);
	/*! \brief Get The list of settings and the select options
	 */
	std::list<SelectedSettingResource> getSettings();

	/*! \brief Set The list of settings and the select options
	 */
	void setSettings(std::list <SelectedSettingResource> settings);
	/*! \brief Get A challenge activity template this challenge activity is validated against (private). May be null and no validation of additional_properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set A challenge activity template this challenge activity is validated against (private). May be null and no validation of additional_properties will be done
	 */
	void setTemplate(std::string  _template);

private:
	long long activity_id;
	std::map <std::string, std::string>additional_properties;
	long long challenge_id;
	CoreChallengeActivitySettings core_settings;
	ActivityEntitlementResource entitlement;
	long long id;
	RewardSetResource reward_set;
	std::list <SelectedSettingResource>settings;
	std::string _template;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ChallengeActivityResource_H_ */
