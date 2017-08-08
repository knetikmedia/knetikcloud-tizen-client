/*
 * UserAchievementResource.h
 *
 * 
 */

#ifndef _UserAchievementResource_H_
#define _UserAchievementResource_H_


#include <string>
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

class UserAchievementResource : public Object {
public:
	/*! \brief Constructor.
	 */
	UserAchievementResource();
	UserAchievementResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UserAchievementResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Flag indicating whether the user has earned the achievement
	 */
	bool getAchieved();

	/*! \brief Set Flag indicating whether the user has earned the achievement
	 */
	void setAchieved(bool  achieved);
	/*! \brief Get The achievement being tracked.  If used for Leveling, this represents the tier name
	 */
	std::string getAchievementName();

	/*! \brief Set The achievement being tracked.  If used for Leveling, this represents the tier name
	 */
	void setAchievementName(std::string  achievement_name);
	/*! \brief Get The date/time this resource was created in seconds since unix epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since unix epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The date/time the achievement was earned as a unix timestamp in seconds
	 */
	long long getEarnedDate();

	/*! \brief Set The date/time the achievement was earned as a unix timestamp in seconds
	 */
	void setEarnedDate(long long  earned_date);
	/*! \brief Get The date/time this resource was last updated in seconds since unix epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since unix epoch
	 */
	void setUpdatedDate(long long  updated_date);

private:
	bool achieved;
	std::string achievement_name;
	long long created_date;
	long long earned_date;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UserAchievementResource_H_ */
