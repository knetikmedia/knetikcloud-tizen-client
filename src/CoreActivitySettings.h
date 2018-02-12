/*
 * CoreActivitySettings.h
 *
 * 
 */

#ifndef _CoreActivitySettings_H_
#define _CoreActivitySettings_H_


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

class CoreActivitySettings : public Object {
public:
	/*! \brief Constructor.
	 */
	CoreActivitySettings();
	CoreActivitySettings(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CoreActivitySettings();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the host can boot a user while the status is PLAYING. Default false
	 */
	bool getBootInPlay();

	/*! \brief Set Whether the host can boot a user while the status is PLAYING. Default false
	 */
	void setBootInPlay(bool  boot_in_play);
	/*! \brief Get Restriction for whether the host creating an occurrence can specify a custom launch address (such as their own ip address). Default 'false'
	 */
	bool getCustomLaunchAddressAllowed();

	/*! \brief Set Restriction for whether the host creating an occurrence can specify a custom launch address (such as their own ip address). Default 'false'
	 */
	void setCustomLaunchAddressAllowed(bool  custom_launch_address_allowed);
	/*! \brief Get Restriction for who can host an occurrence. admin disallows regular users, player means the user must also be a player in the occurrence if not admin, non-player means the user has the option to host without being a player. Default 'player'
	 */
	std::string getHostOption();

	/*! \brief Set Restriction for who can host an occurrence. admin disallows regular users, player means the user must also be a player in the occurrence if not admin, non-player means the user has the option to host without being a player. Default 'player'
	 */
	void setHostOption(std::string  host_option);
	/*! \brief Get Restriction for whether the host has control of the status once the game launches. If false they can only manage the game before (when setup and open). Default 'false'
	 */
	bool getHostStatusControl();

	/*! \brief Set Restriction for whether the host has control of the status once the game launches. If false they can only manage the game before (when setup and open). Default 'false'
	 */
	void setHostStatusControl(bool  host_status_control);
	/*! \brief Get Whether users can join while the status is PLAYING. Default false
	 */
	bool getJoinInPlay();

	/*! \brief Set Whether users can join while the status is PLAYING. Default false
	 */
	void setJoinInPlay(bool  join_in_play);
	/*! \brief Get Whether users can leave while the status is PLAYING. Default false
	 */
	bool getLeaveInPlay();

	/*! \brief Set Whether users can leave while the status is PLAYING. Default false
	 */
	void setLeaveInPlay(bool  leave_in_play);
	/*! \brief Get The maximum number of players the game can hold
	 */
	int getMaxPlayers();

	/*! \brief Set The maximum number of players the game can hold
	 */
	void setMaxPlayers(int  max_players);
	/*! \brief Get The minimum number of players the game can hold
	 */
	int getMinPlayers();

	/*! \brief Set The minimum number of players the game can hold
	 */
	void setMinPlayers(int  min_players);
	/*! \brief Get Restriction for who is able to report game end and results. Admin is always able to send results as well. Default 'none'
	 */
	std::string getResultsTrust();

	/*! \brief Set Restriction for who is able to report game end and results. Admin is always able to send results as well. Default 'none'
	 */
	void setResultsTrust(std::string  results_trust);

private:
	bool boot_in_play;
	bool custom_launch_address_allowed;
	std::string host_option;
	bool host_status_control;
	bool join_in_play;
	bool leave_in_play;
	int max_players;
	int min_players;
	std::string results_trust;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CoreActivitySettings_H_ */
