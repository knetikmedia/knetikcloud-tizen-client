/*
 * TemplateEmailResource.h
 *
 * 
 */

#ifndef _TemplateEmailResource_H_
#define _TemplateEmailResource_H_


#include <string>
#include "KeyValuePair«string,string».h"
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

class TemplateEmailResource : public Object {
public:
	/*! \brief Constructor.
	 */
	TemplateEmailResource();
	TemplateEmailResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TemplateEmailResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Address to attribute the outgoing message to. Optional if the config email.out_address is set.
	 */
	std::string getFrom();

	/*! \brief Set Address to attribute the outgoing message to. Optional if the config email.out_address is set.
	 */
	void setFrom(std::string  from);
	/*! \brief Get A list of user ids to send the message to.
	 */
	std::list<int> getRecipients();

	/*! \brief Set A list of user ids to send the message to.
	 */
	void setRecipients(std::list <int> recipients);
	/*! \brief Get The key for the template
	 */
	std::string getTemplateKey();

	/*! \brief Set The key for the template
	 */
	void setTemplateKey(std::string  template_key);
	/*! \brief Get A list of variables to fill in the template
	 */
	std::list<KeyValuePair«string,string»> getTemplateVars();

	/*! \brief Set A list of variables to fill in the template
	 */
	void setTemplateVars(std::list <KeyValuePair«string,string»> template_vars);

private:
	std::string from;
	std::list <int>recipients;
	std::string template_key;
	std::list <KeyValuePair«string,string»>template_vars;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TemplateEmailResource_H_ */
