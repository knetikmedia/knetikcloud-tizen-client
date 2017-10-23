/*
 * Country.h
 *
 * 
 */

#ifndef _Country_H_
#define _Country_H_


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

class Country : public Object {
public:
	/*! \brief Constructor.
	 */
	Country();
	Country(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Country();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getId();

	/*! \brief Set 
	 */
	void setId(int  id);
	/*! \brief Get 
	 */
	std::string getIso2();

	/*! \brief Set 
	 */
	void setIso2(std::string  iso2);
	/*! \brief Get 
	 */
	std::string getIso3();

	/*! \brief Set 
	 */
	void setIso3(std::string  iso3);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);

private:
	int id;
	std::string iso2;
	std::string iso3;
	std::string name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Country_H_ */
