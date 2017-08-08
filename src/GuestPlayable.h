/*
 * GuestPlayable.h
 *
 * 
 */

#ifndef _GuestPlayable_H_
#define _GuestPlayable_H_


#include <string>
#include "Behavior.h"
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

class GuestPlayable : public Object {
public:
	/*! \brief Constructor.
	 */
	GuestPlayable();
	GuestPlayable(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GuestPlayable();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getDescription();

	/*! \brief Set 
	 */
	void setDescription(std::string  description);
	/*! \brief Get Used for polymorphic type recognition and thus must match an expected type with additional properties
	 */
	std::string getTypeHint();

	/*! \brief Set Used for polymorphic type recognition and thus must match an expected type with additional properties
	 */
	void setTypeHint(std::string  type_hint);
	/*! \brief Get Whether guests are allowed to use items
	 */
	bool getAllowed();

	/*! \brief Set Whether guests are allowed to use items
	 */
	void setAllowed(bool  allowed);
	/*! \brief Get Whether guests are allowed on the leaderboard
	 */
	bool getLeaderboard();

	/*! \brief Set Whether guests are allowed on the leaderboard
	 */
	void setLeaderboard(bool  leaderboard);

private:
	std::string description;
	std::string type_hint;
	bool allowed;
	bool leaderboard;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GuestPlayable_H_ */
