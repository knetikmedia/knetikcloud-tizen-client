/*
 * KeyValuePair«string,string».h
 *
 * 
 */

#ifndef _KeyValuePair«string,string»_H_
#define _KeyValuePair«string,string»_H_


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

class KeyValuePair«string,string» : public Object {
public:
	/*! \brief Constructor.
	 */
	KeyValuePair«string,string»();
	KeyValuePair«string,string»(char* str);

	/*! \brief Destructor.
	 */
	virtual ~KeyValuePair«string,string»();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getKey();

	/*! \brief Set 
	 */
	void setKey(std::string  key);
	/*! \brief Get 
	 */
	std::string getValue();

	/*! \brief Set 
	 */
	void setValue(std::string  value);

private:
	std::string key;
	std::string value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _KeyValuePair«string,string»_H_ */
