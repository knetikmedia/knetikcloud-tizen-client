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
#include "SamiUserLevelingResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiGamificationLevelingApi {
public:
  SamiGamificationLevelingApi();
  virtual ~SamiGamificationLevelingApi();

  void 
  changeUserLevelExperienceUsingPUTWithCompletion(Integer* userId, String* name, Integer* progress, void(* handler)(SamiError*));
  SamiLevelingResource* 
  createLevelUsingPOSTWithCompletion(SamiLevelingResource* level, void (* handler)(SamiLevelingResource*, SamiError*));
  void 
  deleteLevelUsingDELETEWithCompletion(String* name, void(* handler)(SamiError*));
  IList* 
  getAvailableTriggersUsingGET1WithCompletion( void (* handler)(IList*, SamiError*));
  SamiLevelingResource* 
  getLevelUsingGETWithCompletion(String* name, void (* handler)(SamiLevelingResource*, SamiError*));
  SamiPageResource«LevelingResource»* 
  getLevelsUsingGETWithCompletion(String* filterName, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«LevelingResource»*, SamiError*));
  SamiUserLevelingResource* 
  getUserLevelUsingGETWithCompletion(Integer* userId, String* name, void (* handler)(SamiUserLevelingResource*, SamiError*));
  SamiPageResource«UserLevelingResource»* 
  getUserLevelsUsingGETWithCompletion(Integer* userId, void (* handler)(SamiPageResource«UserLevelingResource»*, SamiError*));
  void 
  updateLevelUsingPUTWithCompletion(String* name, SamiLevelingResource* newLevel, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiGamificationLevelingApi_H_ */
