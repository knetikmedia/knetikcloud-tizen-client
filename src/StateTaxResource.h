/*
 * StateTaxResource.h
 *
 * 
 */

#ifndef _StateTaxResource_H_
#define _StateTaxResource_H_


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

class StateTaxResource : public Object {
public:
	/*! \brief Constructor.
	 */
	StateTaxResource();
	StateTaxResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~StateTaxResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The iso3 code of the country, cannot be changed
	 */
	std::string getCountryIso3();

	/*! \brief Set The iso3 code of the country, cannot be changed
	 */
	void setCountryIso3(std::string  country_iso3);
	/*! \brief Get Whether the state is exempt from paying the country tax
	 */
	bool getFederallyExempt();

	/*! \brief Set Whether the state is exempt from paying the country tax
	 */
	void setFederallyExempt(bool  federally_exempt);
	/*! \brief Get The name of the tax
	 */
	std::string getName();

	/*! \brief Set The name of the tax
	 */
	void setName(std::string  name);
	/*! \brief Get The tax rate as a percentage to a maximum of two decimal places (1.5 means 1.5%)
	 */
	double getRate();

	/*! \brief Set The tax rate as a percentage to a maximum of two decimal places (1.5 means 1.5%)
	 */
	void setRate(double  rate);
	/*! \brief Get The code of the state, cannot be changed
	 */
	std::string getStateCode();

	/*! \brief Set The code of the state, cannot be changed
	 */
	void setStateCode(std::string  state_code);
	/*! \brief Get Whether the tax applies to shipping costs
	 */
	bool getTaxShipping();

	/*! \brief Set Whether the tax applies to shipping costs
	 */
	void setTaxShipping(bool  tax_shipping);

private:
	std::string country_iso3;
	bool federally_exempt;
	std::string name;
	double rate;
	std::string state_code;
	bool tax_shipping;
	void __init();
	void __cleanup();

};
}
}

#endif /* _StateTaxResource_H_ */
