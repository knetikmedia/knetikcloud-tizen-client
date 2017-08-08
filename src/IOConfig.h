/*
 * IOConfig.h
 *
 * 
 */

#ifndef _IOConfig_H_
#define _IOConfig_H_


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

class IOConfig : public Object {
public:
	/*! \brief Constructor.
	 */
	IOConfig();
	IOConfig(char* str);

	/*! \brief Destructor.
	 */
	virtual ~IOConfig();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getCustomer();

	/*! \brief Set 
	 */
	void setCustomer(std::string  customer);
	/*! \brief Get 
	 */
	bool getEnabled();

	/*! \brief Set 
	 */
	void setEnabled(bool  enabled);
	/*! \brief Get 
	 */
	std::string getEnvironment();

	/*! \brief Set 
	 */
	void setEnvironment(std::string  environment);
	/*! \brief Get 
	 */
	std::string getProduct();

	/*! \brief Set 
	 */
	void setProduct(std::string  product);

private:
	std::string customer;
	bool enabled;
	std::string environment;
	std::string product;
	void __init();
	void __cleanup();

};
}
}

#endif /* _IOConfig_H_ */
