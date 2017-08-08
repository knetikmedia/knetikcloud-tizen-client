/*
 * StateResource.h
 *
 * 
 */

#ifndef _StateResource_H_
#define _StateResource_H_


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

class StateResource : public Object {
public:
	/*! \brief Constructor.
	 */
	StateResource();
	StateResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~StateResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The code of the state
	 */
	std::string getCode();

	/*! \brief Set The code of the state
	 */
	void setCode(std::string  code);
	/*! \brief Get The iso3 of the country this state is in
	 */
	std::string getCountryCodeIso3();

	/*! \brief Set The iso3 of the country this state is in
	 */
	void setCountryCodeIso3(std::string  country_code_iso3);
	/*! \brief Get The unique ID for the state
	 */
	int getId();

	/*! \brief Set The unique ID for the state
	 */
	void setId(int  id);
	/*! \brief Get The name of the state
	 */
	std::string getName();

	/*! \brief Set The name of the state
	 */
	void setName(std::string  name);

private:
	std::string code;
	std::string country_code_iso3;
	int id;
	std::string name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _StateResource_H_ */
