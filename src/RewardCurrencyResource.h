/*
 * RewardCurrencyResource.h
 *
 * 
 */

#ifndef _RewardCurrencyResource_H_
#define _RewardCurrencyResource_H_


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

class RewardCurrencyResource : public Object {
public:
	/*! \brief Constructor.
	 */
	RewardCurrencyResource();
	RewardCurrencyResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~RewardCurrencyResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The code of the currency type to give
	 */
	std::string getCurrencyCode();

	/*! \brief Set The code of the currency type to give
	 */
	void setCurrencyCode(std::string  currency_code);
	/*! \brief Get The name of the currency reward to give.  Set by currency_code)
	 */
	std::string getCurrencyName();

	/*! \brief Set The name of the currency reward to give.  Set by currency_code)
	 */
	void setCurrencyName(std::string  currency_name);
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
	/*! \brief Get True if the value is actually a percentage of the intake
	 */
	bool getPercent();

	/*! \brief Set True if the value is actually a percentage of the intake
	 */
	void setPercent(bool  percent);
	/*! \brief Get The amount of currency to give. For percentage values, 0.5 is 50%
	 */
	double getValue();

	/*! \brief Set The amount of currency to give. For percentage values, 0.5 is 50%
	 */
	void setValue(double  value);

private:
	std::string currency_code;
	std::string currency_name;
	int max_rank;
	int min_rank;
	bool percent;
	double value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _RewardCurrencyResource_H_ */
