/*
 * RewardSetResource.h
 *
 * 
 */

#ifndef _RewardSetResource_H_
#define _RewardSetResource_H_


#include <string>
#include "RewardCurrencyResource.h"
#include "RewardItemResource.h"
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

class RewardSetResource : public Object {
public:
	/*! \brief Constructor.
	 */
	RewardSetResource();
	RewardSetResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~RewardSetResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The date/time this resource was created in seconds since unix epoch
	 */
	long long getCreatedDate();

	/*! \brief Set The date/time this resource was created in seconds since unix epoch
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The currency to give as rewards
	 */
	std::list<RewardCurrencyResource> getCurrencyRewards();

	/*! \brief Set The currency to give as rewards
	 */
	void setCurrencyRewards(std::list <RewardCurrencyResource> currency_rewards);
	/*! \brief Get The assigned unique ID for this reward set
	 */
	int getId();

	/*! \brief Set The assigned unique ID for this reward set
	 */
	void setId(int  id);
	/*! \brief Get The items to give as rewards
	 */
	std::list<RewardItemResource> getItemRewards();

	/*! \brief Set The items to give as rewards
	 */
	void setItemRewards(std::list <RewardItemResource> item_rewards);
	/*! \brief Get A longer describe the reward set, usually included in details
	 */
	std::string getLongDescription();

	/*! \brief Set A longer describe the reward set, usually included in details
	 */
	void setLongDescription(std::string  long_description);
	/*! \brief Get The maximum placing that will receive a reward
	 */
	int getMaxPlacing();

	/*! \brief Set The maximum placing that will receive a reward
	 */
	void setMaxPlacing(int  max_placing);
	/*! \brief Get The user friendly name for this reward set
	 */
	std::string getName();

	/*! \brief Set The user friendly name for this reward set
	 */
	void setName(std::string  name);
	/*! \brief Get A short paragraph to describe the reward set, usually included in listings.  Max 255 characters
	 */
	std::string getShortDescription();

	/*! \brief Set A short paragraph to describe the reward set, usually included in listings.  Max 255 characters
	 */
	void setShortDescription(std::string  short_description);
	/*! \brief Get A provided unique key for this reward set
	 */
	std::string getUniqueKey();

	/*! \brief Set A provided unique key for this reward set
	 */
	void setUniqueKey(std::string  unique_key);
	/*! \brief Get The date/time this resource was last updated in seconds since unix epoch
	 */
	long long getUpdatedDate();

	/*! \brief Set The date/time this resource was last updated in seconds since unix epoch
	 */
	void setUpdatedDate(long long  updated_date);

private:
	long long created_date;
	std::list <RewardCurrencyResource>currency_rewards;
	int id;
	std::list <RewardItemResource>item_rewards;
	std::string long_description;
	int max_placing;
	std::string name;
	std::string short_description;
	std::string unique_key;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _RewardSetResource_H_ */
