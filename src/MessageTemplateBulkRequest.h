/*
 * MessageTemplateBulkRequest.h
 *
 * 
 */

#ifndef _MessageTemplateBulkRequest_H_
#define _MessageTemplateBulkRequest_H_


#include <string>
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

class MessageTemplateBulkRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	MessageTemplateBulkRequest();
	MessageTemplateBulkRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MessageTemplateBulkRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The data to fill the templates with
	 */
	std::string getData();

	/*! \brief Set The data to fill the templates with
	 */
	void setData(std::string  data);
	/*! \brief Get A list of message template ids
	 */
	std::list<std::string> getIds();

	/*! \brief Set A list of message template ids
	 */
	void setIds(std::list <std::string> ids);

private:
	std::string data;
	std::list <std::string>ids;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MessageTemplateBulkRequest_H_ */
