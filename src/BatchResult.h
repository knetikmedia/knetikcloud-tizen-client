/*
 * BatchResult.h
 *
 * 
 */

#ifndef _BatchResult_H_
#define _BatchResult_H_


#include <string>
#include "BatchReturn.h"
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

class BatchResult : public Object {
public:
	/*! \brief Constructor.
	 */
	BatchResult();
	BatchResult(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BatchResult();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get List of batch responses.  Returns in the order requested
	 */
	std::list<BatchReturn> getBatchReturn();

	/*! \brief Set List of batch responses.  Returns in the order requested
	 */
	void setBatchReturn(std::list <BatchReturn> batch_return);
	/*! \brief Get The date the batch call started processing
	 */
	long long getCreatedDate();

	/*! \brief Set The date the batch call started processing
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The token to use at the /batch/{token} endpoint if the request times out
	 */
	std::string getId();

	/*! \brief Set The token to use at the /batch/{token} endpoint if the request times out
	 */
	void setId(std::string  id);
	/*! \brief Get The date the batch call finished processing
	 */
	long long getUpdatedDate();

	/*! \brief Set The date the batch call finished processing
	 */
	void setUpdatedDate(long long  updated_date);

private:
	std::list <BatchReturn>batch_return;
	long long created_date;
	std::string id;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BatchResult_H_ */
