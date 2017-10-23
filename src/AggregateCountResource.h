/*
 * AggregateCountResource.h
 *
 * 
 */

#ifndef _AggregateCountResource_H_
#define _AggregateCountResource_H_


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

class AggregateCountResource : public Object {
public:
	/*! \brief Constructor.
	 */
	AggregateCountResource();
	AggregateCountResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AggregateCountResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long getCount();

	/*! \brief Set 
	 */
	void setCount(long long  count);
	/*! \brief Get 
	 */
	std::string getDate();

	/*! \brief Set 
	 */
	void setDate(std::string  date);

private:
	long long count;
	std::string date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AggregateCountResource_H_ */
