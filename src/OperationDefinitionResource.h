/*
 * OperationDefinitionResource.h
 *
 * 
 */

#ifndef _OperationDefinitionResource_H_
#define _OperationDefinitionResource_H_


#include <string>
#include "ArgumentResource.h"
#include "Operator.h"
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

class OperationDefinitionResource : public Object {
public:
	/*! \brief Constructor.
	 */
	OperationDefinitionResource();
	OperationDefinitionResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~OperationDefinitionResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<ArgumentResource> getArguments();

	/*! \brief Set 
	 */
	void setArguments(std::list <ArgumentResource> arguments);
	/*! \brief Get 
	 */
	std::string getDescription();

	/*! \brief Set 
	 */
	void setDescription(std::string  description);
	/*! \brief Get 
	 */
	Operator getOperator();

	/*! \brief Set 
	 */
	void setOperator(Operator  _operator);
	/*! \brief Get 
	 */
	std::string getReturnType();

	/*! \brief Set 
	 */
	void setReturnType(std::string  return_type);
	/*! \brief Get 
	 */
	std::string getTemplate();

	/*! \brief Set 
	 */
	void setTemplate(std::string  _template);

private:
	std::list <ArgumentResource>arguments;
	std::string description;
	Operator _operator;
	std::string return_type;
	std::string _template;
	void __init();
	void __cleanup();

};
}
}

#endif /* _OperationDefinitionResource_H_ */
