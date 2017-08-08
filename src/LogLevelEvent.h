/*
 * LogLevelEvent.h
 *
 * 
 */

#ifndef _LogLevelEvent_H_
#define _LogLevelEvent_H_


#include <string>
#include "BroadcastableEvent.h"
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

class LogLevelEvent : public Object {
public:
	/*! \brief Constructor.
	 */
	LogLevelEvent();
	LogLevelEvent(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LogLevelEvent();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getClient();

	/*! \brief Set 
	 */
	void setClient(std::string  client);
	/*! \brief Get 
	 */
	std::string getCustomer();

	/*! \brief Set 
	 */
	void setCustomer(std::string  customer);
	/*! \brief Get 
	 */
	bool getDoNotBroadcast();

	/*! \brief Set 
	 */
	void setDoNotBroadcast(bool  do_not_broadcast);
	/*! \brief Get 
	 */
	std::string getSection();

	/*! \brief Set 
	 */
	void setSection(std::string  section);
	/*! \brief Get 
	 */
	std::string getSource();

	/*! \brief Set 
	 */
	void setSource(std::string  source);
	/*! \brief Get 
	 */
	std::string getSpecifics();

	/*! \brief Set 
	 */
	void setSpecifics(std::string  specifics);
	/*! \brief Get 
	 */
	bool getSynchronous();

	/*! \brief Set 
	 */
	void setSynchronous(bool  synchronous);
	/*! \brief Get 
	 */
	long long getTimestamp();

	/*! \brief Set 
	 */
	void setTimestamp(long long  timestamp);
	/*! \brief Get The type of the event. Used for polymorphic type recognition and thus must match an expected type
	 */
	std::string getType();

	/*! \brief Set The type of the event. Used for polymorphic type recognition and thus must match an expected type
	 */
	void setType(std::string  type);
	/*! \brief Get 
	 */
	std::string getLevel();

	/*! \brief Set 
	 */
	void setLevel(std::string  level);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);

private:
	std::string client;
	std::string customer;
	bool do_not_broadcast;
	std::string section;
	std::string source;
	std::string specifics;
	bool synchronous;
	long long timestamp;
	std::string type;
	std::string level;
	std::string name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LogLevelEvent_H_ */
