#ifndef SamiGamificationLevelingApi_H_
#define SamiGamificationLevelingApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiBreTriggerResource.h"
#include "SamiLevelingResource.h"
#include "SamiPageResource«LevelingResource».h"
#include "SamiPageResource«UserLevelingResource».h"
#include "SamiResult.h"
#include "SamiUserLevelingResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiGamificationLevelingApi {
public:
  SamiGamificationLevelingApi();
  virtual ~SamiGamificationLevelingApi();

  SamiLevelingResource* 
  createLevelWithCompletion(SamiLevelingResource* level, void (* handler)(SamiLevelingResource*, SamiError*));
  void 
  deleteLevelWithCompletion(String* name, void(* handler)(SamiError*));
  SamiLevelingResource* 
  getLevelWithCompletion(String* name, void (* handler)(SamiLevelingResource*, SamiError*));
  IList* 
  getLevelTriggersWithCompletion( void (* handler)(IList*, SamiError*));
  SamiPageResource«LevelingResource»* 
  getLevelsWithCompletion(String* filterName, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«LevelingResource»*, SamiError*));
  SamiUserLevelingResource* 
  getUserLevelWithCompletion(Integer* userId, String* name, void (* handler)(SamiUserLevelingResource*, SamiError*));
  SamiPageResource«UserLevelingResource»* 
  getUserLevelsWithCompletion(Integer* userId, void (* handler)(SamiPageResource«UserLevelingResource»*, SamiError*));
  SamiLevelingResource* 
  updateLevelWithCompletion(String* name, SamiLevelingResource* newLevel, void (* handler)(SamiLevelingResource*, SamiError*));
  void 
  updateUserLevelWithCompletion(Integer* userId, String* name, Integer* progress, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiGamificationLevelingApi_H_ */
