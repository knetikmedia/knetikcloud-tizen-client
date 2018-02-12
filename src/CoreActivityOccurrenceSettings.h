/*
 * CoreActivityOccurrenceSettings.h
 *
 * 
 */

#ifndef _CoreActivityOccurrenceSettings_H_
#define _CoreActivityOccurrenceSettings_H_


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

class CoreActivityOccurrenceSettings : public Object {
public:
	/*! \brief Constructor.
	 */
	CoreActivityOccurrenceSettings();
	CoreActivityOccurrenceSettings(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CoreActivityOccurrenceSettings();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the host can boot another user while the status is PLAYING. Must be false or null unless this setting is true in activity (or challenge if applicable). Null to inherit
	 */
	bool getBootInPlay();

	/*! \brief Set Whether the host can boot another user while the status is PLAYING. Must be false or null unless this setting is true in activity (or challenge if applicable). Null to inherit
	 */
	void setBootInPlay(bool  boot_in_play);
	/*! \brief Get A custom address (url, ip or whatever is needed in your game) that users should connect to to play in this occurrence rather than the usual game server. Could be the ip address of the host for peer-to-peer play. Can only be set if the activity/challenge custom_launch_address_allowed is true. Max length: 255
	 */
	std::string getCustomLaunchAddress();

	/*! \brief Set A custom address (url, ip or whatever is needed in your game) that users should connect to to play in this occurrence rather than the usual game server. Could be the ip address of the host for peer-to-peer play. Can only be set if the activity/challenge custom_launch_address_allowed is true. Max length: 255
	 */
	void setCustomLaunchAddress(std::string  custom_launch_address);
	/*! \brief Get Restriction for whether the host has control of the status once the game launches. If false they can only manage the game before (when setup and open). Cannot be true if activity/challenge has it false. Null to inherit
	 */
	bool getHostStatusControl();

	/*! \brief Set Restriction for whether the host has control of the status once the game launches. If false they can only manage the game before (when setup and open). Cannot be true if activity/challenge has it false. Null to inherit
	 */
	void setHostStatusControl(bool  host_status_control);
	/*! \brief Get Whether users can join while the status is PLAYING. Must be false or null unless this setting is true in activity (or challenge if applicable). Null to inherit
	 */
	bool getJoinInPlay();

	/*! \brief Set Whether users can join while the status is PLAYING. Must be false or null unless this setting is true in activity (or challenge if applicable). Null to inherit
	 */
	void setJoinInPlay(bool  join_in_play);
	/*! \brief Get Whether users can leave while the status is PLAYING. Must be false or null unless this setting is true in activity (or challenge if applicable). Null to inherit
	 */
	bool getLeaveInPlay();

	/*! \brief Set Whether users can leave while the status is PLAYING. Must be false or null unless this setting is true in activity (or challenge if applicable). Null to inherit
	 */
	void setLeaveInPlay(bool  leave_in_play);
	/*! \brief Get The maximum number of players the game can hold. Must be equal or less than activity (or must match challenge if applicable)
	 */
	int getMaxPlayers();

	/*! \brief Set The maximum number of players the game can hold. Must be equal or less than activity (or must match challenge if applicable)
	 */
	void setMaxPlayers(int  max_players);
	/*! \brief Get The minimum number of players the game can hold. Must be equal or greater than activity (or must match challenge if applicable)
	 */
	int getMinPlayers();

	/*! \brief Set The minimum number of players the game can hold. Must be equal or greater than activity (or must match challenge if applicable)
	 */
	void setMinPlayers(int  min_players);
	/*! \brief Get Restriction for whether the non-host players can control of the status in place of the host. Default: false
	 */
	bool getNonHostStatusControl();

	/*! \brief Set Restriction for whether the non-host players can control of the status in place of the host. Default: false
	 */
	void setNonHostStatusControl(bool  non_host_status_control);
	/*! \brief Get Restriction for who is able to report game end and results. Admin is always able to send results as well. Must be equal or more restrictive than activity (or must match challenge if applicable). Default inherits
	 */
	std::string getResultsTrust();

	/*! \brief Set Restriction for who is able to report game end and results. Admin is always able to send results as well. Must be equal or more restrictive than activity (or must match challenge if applicable). Default inherits
	 */
	void setResultsTrust(std::string  results_trust);

private:
	bool boot_in_play;
	std::string custom_launch_address;
	bool host_status_control;
	bool join_in_play;
	bool leave_in_play;
	int max_players;
	int min_players;
	bool non_host_status_control;
	std::string results_trust;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CoreActivityOccurrenceSettings_H_ */
