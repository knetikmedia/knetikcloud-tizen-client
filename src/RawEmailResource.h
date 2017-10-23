/*
 * RawEmailResource.h
 *
 * 
 */

#ifndef _RawEmailResource_H_
#define _RawEmailResource_H_


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

class RawEmailResource : public Object {
public:
	/*! \brief Constructor.
	 */
	RawEmailResource();
	RawEmailResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~RawEmailResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The body of the outgoing message.
	 */
	std::string getBody();

	/*! \brief Set The body of the outgoing message.
	 */
	void setBody(std::string  body);
	/*! \brief Get Address to attribute the outgoing message to. Optional if the config email.out_address is set.
	 */
	std::string getFrom();

	/*! \brief Set Address to attribute the outgoing message to. Optional if the config email.out_address is set.
	 */
	void setFrom(std::string  from);
	/*! \brief Get Whether the body is to be treated as html. Default false.
	 */
	bool getHtml();

	/*! \brief Set Whether the body is to be treated as html. Default false.
	 */
	void setHtml(bool  html);
	/*! \brief Get A list of user ids to send the message to.
	 */
	std::list<int> getRecipients();

	/*! \brief Set A list of user ids to send the message to.
	 */
	void setRecipients(std::list <int> recipients);
	/*! \brief Get The subject of the outgoing message.
	 */
	std::string getSubject();

	/*! \brief Set The subject of the outgoing message.
	 */
	void setSubject(std::string  subject);

private:
	std::string body;
	std::string from;
	bool html;
	std::list <int>recipients;
	std::string subject;
	void __init();
	void __cleanup();

};
}
}

#endif /* _RawEmailResource_H_ */
