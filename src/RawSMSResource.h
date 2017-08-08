/*
 * RawSMSResource.h
 *
 * 
 */

#ifndef _RawSMSResource_H_
#define _RawSMSResource_H_


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

class RawSMSResource : public Object {
public:
	/*! \brief Constructor.
	 */
	RawSMSResource();
	RawSMSResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~RawSMSResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The phone number to attribute the outgoing message to. Optional if the config text.out_number is set.
	 */
	std::string getFrom();

	/*! \brief Set The phone number to attribute the outgoing message to. Optional if the config text.out_number is set.
	 */
	void setFrom(std::string  from);
	/*! \brief Get A list of user ids to send the message to.
	 */
	std::list<int> getRecipients();

	/*! \brief Set A list of user ids to send the message to.
	 */
	void setRecipients(std::list <int> recipients);
	/*! \brief Get The body of the outgoing text message.
	 */
	std::string getText();

	/*! \brief Set The body of the outgoing text message.
	 */
	void setText(std::string  text);

private:
	std::string from;
	std::list <int>recipients;
	std::string text;
	void __init();
	void __cleanup();

};
}
}

#endif /* _RawSMSResource_H_ */
