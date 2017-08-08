/*
 * CurrencyResource.h
 *
 * 
 */

#ifndef _CurrencyResource_H_
#define _CurrencyResource_H_


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

class CurrencyResource : public Object {
public:
	/*! \brief Constructor.
	 */
	CurrencyResource();
	CurrencyResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CurrencyResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the currency is active. Default true
	 */
	bool getActive();

	/*! \brief Set Whether the currency is active. Default true
	 */
	void setActive(bool  active);
	/*! \brief Get The unique id code for the currency. Maximum 5 characters
	 */
	std::string getCode();

	/*! \brief Set The unique id code for the currency. Maximum 5 characters
	 */
	void setCode(std::string  code);
	/*! \brief Get The unix timestamp in seconds the currency was added to the system
	 */
	long long getCreatedDate();

	/*! \brief Set The unix timestamp in seconds the currency was added to the system
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The decimal to multiply the system base currency (from config 'currency') to localize to this one. Should be 1 for the base currency itself.
	 */
	double getFactor();

	/*! \brief Set The decimal to multiply the system base currency (from config 'currency') to localize to this one. Should be 1 for the base currency itself.
	 */
	void setFactor(double  factor);
	/*! \brief Get The url for an icon of the currency
	 */
	std::string getIcon();

	/*! \brief Set The url for an icon of the currency
	 */
	void setIcon(std::string  icon);
	/*! \brief Get The name of the currency
	 */
	std::string getName();

	/*! \brief Set The name of the currency
	 */
	void setName(std::string  name);
	/*! \brief Get The type of currency. Default 'real'
	 */
	std::string getType();

	/*! \brief Set The type of currency. Default 'real'
	 */
	void setType(std::string  type);
	/*! \brief Get The unix timestamp in seconds the currency was last updated in the system.
	 */
	long long getUpdatedDate();

	/*! \brief Set The unix timestamp in seconds the currency was last updated in the system.
	 */
	void setUpdatedDate(long long  updated_date);

private:
	bool active;
	std::string code;
	long long created_date;
	double factor;
	std::string icon;
	std::string name;
	std::string type;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CurrencyResource_H_ */
