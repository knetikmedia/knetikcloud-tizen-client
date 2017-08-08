/*
 * Batch.h
 *
 * 
 */

#ifndef _Batch_H_
#define _Batch_H_


#include <string>
#include "BatchRequest.h"
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

class Batch : public Object {
public:
	/*! \brief Constructor.
	 */
	Batch();
	Batch(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Batch();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The list of batch requests
	 */
	std::list<BatchRequest> getBatch();

	/*! \brief Set The list of batch requests
	 */
	void setBatch(std::list <BatchRequest> batch);
	/*! \brief Get The amount of time before a request token is returned instead of the batch result.  Default is 60.  Range is 0-300
	 */
	int getTimeout();

	/*! \brief Set The amount of time before a request token is returned instead of the batch result.  Default is 60.  Range is 0-300
	 */
	void setTimeout(int  timeout);

private:
	std::list <BatchRequest>batch;
	int timeout;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Batch_H_ */
