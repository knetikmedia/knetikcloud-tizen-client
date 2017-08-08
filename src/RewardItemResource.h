/*
 * RewardItemResource.h
 *
 * 
 */

#ifndef _RewardItemResource_H_
#define _RewardItemResource_H_


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

class RewardItemResource : public Object {
public:
	/*! \brief Constructor.
	 */
	RewardItemResource();
	RewardItemResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~RewardItemResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the item to reward
	 */
	int getItemId();

	/*! \brief Set The id of the item to reward
	 */
	void setItemId(int  item_id);
	/*! \brief Get The name of the item to reward (read only, set by id)
	 */
	std::string getItemName();

	/*! \brief Set The name of the item to reward (read only, set by id)
	 */
	void setItemName(std::string  item_name);
	/*! \brief Get The highest number (worst) rank to give the reward to. Must be greater than or equal to minRank
	 */
	int getMaxRank();

	/*! \brief Set The highest number (worst) rank to give the reward to. Must be greater than or equal to minRank
	 */
	void setMaxRank(int  max_rank);
	/*! \brief Get The lowest number (best) rank to give the reward to. Must be greater than zero
	 */
	int getMinRank();

	/*! \brief Set The lowest number (best) rank to give the reward to. Must be greater than zero
	 */
	void setMinRank(int  min_rank);
	/*! \brief Get How many copies to give
	 */
	int getQuantity();

	/*! \brief Set How many copies to give
	 */
	void setQuantity(int  quantity);

private:
	int item_id;
	std::string item_name;
	int max_rank;
	int min_rank;
	int quantity;
	void __init();
	void __cleanup();

};
}
}

#endif /* _RewardItemResource_H_ */
