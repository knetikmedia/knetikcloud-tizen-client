/*
 * RawPushResource.h
 *
 * 
 */

#ifndef _RawPushResource_H_
#define _RawPushResource_H_


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

class RawPushResource : public Object {
public:
	/*! \brief Constructor.
	 */
	RawPushResource();
	RawPushResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~RawPushResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A list of user ids to send the message to.
	 */
	std::list<int> getRecipients();

	/*! \brief Set A list of user ids to send the message to.
	 */
	void setRecipients(std::list <int> recipients);
	/*! \brief Get The body of the outgoing message.
	 */
	std::string getText();

	/*! \brief Set The body of the outgoing message.
	 */
	void setText(std::string  text);

private:
	std::list <int>recipients;
	std::string text;
	void __init();
	void __cleanup();

};
}
}

#endif /* _RawPushResource_H_ */
