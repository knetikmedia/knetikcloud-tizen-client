#ifndef SamiGamificationAchievementsApi_H_
#define SamiGamificationAchievementsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiAchievementDefinitionResource.h"
#include "SamiAchievementProgressUpdateRequest.h"
#include "SamiBreTriggerResource.h"
#include "SamiPage«AchievementDefinitionResource».h"
#include "SamiPage«TemplateResource».h"
#include "SamiPage«UserAchievementResource».h"
#include "SamiTemplateResource.h"
#include "SamiUserAchievementResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiGamificationAchievementsApi {
public:
  SamiGamificationAchievementsApi();
  virtual ~SamiGamificationAchievementsApi();

  SamiAchievementDefinitionResource* 
  createAchievementUsingPOSTWithCompletion(SamiAchievementDefinitionResource* achievement, void (* handler)(SamiAchievementDefinitionResource*, SamiError*));
  SamiTemplateResource* 
  createTemplateUsingPOSTWithCompletion(SamiTemplateResource* template, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteAchievementTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  void 
  deleteAchievementUsingDELETEWithCompletion(String* name, void(* handler)(SamiError*));
  SamiTemplateResource* 
  getAchievementTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPage«TemplateResource»* 
  getAchievementTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPage«TemplateResource»*, SamiError*));
  SamiAchievementDefinitionResource* 
  getAchievementUsingGETWithCompletion(String* name, void (* handler)(SamiAchievementDefinitionResource*, SamiError*));
  SamiPage«AchievementDefinitionResource»* 
  getAchievementsUsingGETWithCompletion(String* filterTagset, String* filterName, Boolean* filterHidden, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«AchievementDefinitionResource»*, SamiError*));
  SamiPage«UserAchievementResource»* 
  getAllUserProgressForAchievementUsingGETWithCompletion(String* achievementName, String* filterAchievementTagset, Boolean* filterAchievementHidden, Integer* size, Integer* page, void (* handler)(SamiPage«UserAchievementResource»*, SamiError*));
  SamiPage«UserAchievementResource»* 
  getAllUserProgressUsingGETWithCompletion(String* filterAchievementTagset, String* filterAchievementName, Boolean* filterAchievementHidden, Integer* size, Integer* page, void (* handler)(SamiPage«UserAchievementResource»*, SamiError*));
  IList* 
  getAvailableTriggersUsingGETWithCompletion( void (* handler)(IList*, SamiError*));
  SamiUserAchievementResource* 
  getUserProgressForAchievementUsingGETWithCompletion(Integer* userId, String* achievementName, void (* handler)(SamiUserAchievementResource*, SamiError*));
  SamiPage«UserAchievementResource»* 
  getUserProgressUsingGETWithCompletion(Integer* userId, String* filterAchievementTagset, String* filterAchievementName, Boolean* filterAchievementHidden, Integer* size, Integer* page, void (* handler)(SamiPage«UserAchievementResource»*, SamiError*));
  void 
  updateAchievementUsingPUTWithCompletion(String* name, SamiAchievementDefinitionResource* achievement, void(* handler)(SamiError*));
  SamiUserAchievementResource* 
  updateProgressUsingPUTWithCompletion(Integer* userId, String* achievementName, SamiAchievementProgressUpdateRequest* request, void (* handler)(SamiUserAchievementResource*, SamiError*));
  void 
  updateTemplateUsingPUTWithCompletion(String* _id, SamiTemplateResource* template, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiGamificationAchievementsApi_H_ */
