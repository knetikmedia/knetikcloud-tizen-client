/*
 * UserLevelingResource.h
 *
 * 
 */

#ifndef _UserLevelingResource_H_
#define _UserLevelingResource_H_


#include <string>
#include <list>
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

class UserLevelingResource : public Object {
public:
	/*! \brief Constructor.
	 */
	UserLevelingResource();
	UserLevelingResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UserLevelingResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The name of the last tier the user has qualified for
	 */
	std::string getLastTierName();

	/*! \brief Set The name of the last tier the user has qualified for
	 */
	void setLastTierName(std::string  last_tier_name);
	/*! \brief Get The progress level of the last tier the user has qualified for
	 */
	int getLastTierProgress();

	/*! \brief Set The progress level of the last tier the user has qualified for
	 */
	void setLastTierProgress(int  last_tier_progress);
	/*! \brief Get The name of the level schema
	 */
	std::string getLevelName();

	/*! \brief Set The name of the level schema
	 */
	void setLevelName(std::string  level_name);
	/*! \brief Get The name of the next tier the user can qualify for
	 */
	std::string getNextTierName();

	/*! \brief Set The name of the next tier the user can qualify for
	 */
	void setNextTierName(std::string  next_tier_name);
	/*! \brief Get The progress needed to qualify for the next tier
	 */
	int getNextTierProgress();

	/*! \brief Set The progress needed to qualify for the next tier
	 */
	void setNextTierProgress(int  next_tier_progress);
	/*! \brief Get The amount of progress the user has
	 */
	int getProgress();

	/*! \brief Set The amount of progress the user has
	 */
	void setProgress(int  progress);
	/*! \brief Get The names of the tiers the user has qualified for
	 */
	std::list<std::string> getTierNames();

	/*! \brief Set The names of the tiers the user has qualified for
	 */
	void setTierNames(std::list <std::string> tier_names);
	/*! \brief Get The ID of the user
	 */
	int getUserId();

	/*! \brief Set The ID of the user
	 */
	void setUserId(int  user_id);

private:
	std::string last_tier_name;
	int last_tier_progress;
	std::string level_name;
	std::string next_tier_name;
	int next_tier_progress;
	int progress;
	std::list <std::string>tier_names;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UserLevelingResource_H_ */
