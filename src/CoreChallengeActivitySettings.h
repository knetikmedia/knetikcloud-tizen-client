/*
 * CoreChallengeActivitySettings.h
 *
 * 
 */

#ifndef _CoreChallengeActivitySettings_H_
#define _CoreChallengeActivitySettings_H_


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

class CoreChallengeActivitySettings : public Object {
public:
	/*! \brief Constructor.
	 */
	CoreChallengeActivitySettings();
	CoreChallengeActivitySettings(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CoreChallengeActivitySettings();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the host can boot a user while the status is PLAYING. Null to inherit from activity
	 */
	bool getBootInPlay();

	/*! \brief Set Whether the host can boot a user while the status is PLAYING. Null to inherit from activity
	 */
	void setBootInPlay(bool  boot_in_play);
	/*! \brief Get A custom address (url, ip or whatever is needed in your game) that users should connect to to play in this challenge rather than the usual game server. Max length: 255
	 */
	std::string getCustomLaunchAddress();

	/*! \brief Set A custom address (url, ip or whatever is needed in your game) that users should connect to to play in this challenge rather than the usual game server. Max length: 255
	 */
	void setCustomLaunchAddress(std::string  custom_launch_address);
	/*! \brief Get Restriction for whether the host creating an occurrence can specify a custom launch address (such as their own ip address). Will override the challenge's custom_launch_address if they do. Null to inherit from activity
	 */
	bool getCustomLaunchAddressAllowed();

	/*! \brief Set Restriction for whether the host creating an occurrence can specify a custom launch address (such as their own ip address). Will override the challenge's custom_launch_address if they do. Null to inherit from activity
	 */
	void setCustomLaunchAddressAllowed(bool  custom_launch_address_allowed);
	/*! \brief Get Restriction for who can host an occurrence. admin disallows regular users, player means the user must also be a player in the occurrence if not admin, non-player means the user has the option to host without being a player. Null to inherit
	 */
	std::string getHostOption();

	/*! \brief Set Restriction for who can host an occurrence. admin disallows regular users, player means the user must also be a player in the occurrence if not admin, non-player means the user has the option to host without being a player. Null to inherit
	 */
	void setHostOption(std::string  host_option);
	/*! \brief Get Restriction for whether the host has control of the status once the game launches. If false they can only manage the game before (when setup and open). Max length: 255. Null to inherit from activity
	 */
	bool getHostStatusControl();

	/*! \brief Set Restriction for whether the host has control of the status once the game launches. If false they can only manage the game before (when setup and open). Max length: 255. Null to inherit from activity
	 */
	void setHostStatusControl(bool  host_status_control);
	/*! \brief Get Whether users can join while the status is PLAYING. Null to inherit from activity
	 */
	bool getJoinInPlay();

	/*! \brief Set Whether users can join while the status is PLAYING. Null to inherit from activity
	 */
	void setJoinInPlay(bool  join_in_play);
	/*! \brief Get Whether users can leave while the status is PLAYING. Null to inherit from activity
	 */
	bool getLeaveInPlay();

	/*! \brief Set Whether users can leave while the status is PLAYING. Null to inherit from activity
	 */
	void setLeaveInPlay(bool  leave_in_play);
	/*! \brief Get The maximum number of players the game can hold. Null to inherit from activity
	 */
	int getMaxPlayers();

	/*! \brief Set The maximum number of players the game can hold. Null to inherit from activity
	 */
	void setMaxPlayers(int  max_players);
	/*! \brief Get The minimum number of players the game can hold. Null to inherit from activity
	 */
	int getMinPlayers();

	/*! \brief Set The minimum number of players the game can hold. Null to inherit from activity
	 */
	void setMinPlayers(int  min_players);
	/*! \brief Get Restriction for who is able to report game end and results. Admin is always able to send results as well. Null to inherit from activity
	 */
	std::string getResultsTrust();

	/*! \brief Set Restriction for who is able to report game end and results. Admin is always able to send results as well. Null to inherit from activity
	 */
	void setResultsTrust(std::string  results_trust);

private:
	bool boot_in_play;
	std::string custom_launch_address;
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

#endif /* _CoreChallengeActivitySettings_H_ */
