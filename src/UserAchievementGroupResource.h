/*
 * UserAchievementGroupResource.h
 *
 * 
 */

#ifndef _UserAchievementGroupResource_H_
#define _UserAchievementGroupResource_H_


#include <string>
#include "UserAchievementResource.h"
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

class UserAchievementGroupResource : public Object {
public:
	/*! \brief Constructor.
	 */
	UserAchievementGroupResource();
	UserAchievementGroupResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UserAchievementGroupResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The list of achievements associated with the group
	 */
	std::list<UserAchievementResource> getAchievements();

	/*! \brief Set The list of achievements associated with the group
	 */
	void setAchievements(std::list <UserAchievementResource> achievements);
	/*! \brief Get The name of the group.  If used by Leveling, this will represent the level name
	 */
	std::string getGroupName();

	/*! \brief Set The name of the group.  If used by Leveling, this will represent the level name
	 */
	void setGroupName(std::string  group_name);
	/*! \brief Get The id of the achievement progress
	 */
	std::string getId();

	/*! \brief Set The id of the achievement progress
	 */
	void setId(std::string  id);
	/*! \brief Get The current progress of the user on the group
	 */
	int getProgress();

	/*! \brief Set The current progress of the user on the group
	 */
	void setProgress(int  progress);
	/*! \brief Get The id of the user whose progress is being tracked
	 */
	int getUserId();

	/*! \brief Set The id of the user whose progress is being tracked
	 */
	void setUserId(int  user_id);

private:
	std::list <UserAchievementResource>achievements;
	std::string group_name;
	std::string id;
	int progress;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UserAchievementGroupResource_H_ */
