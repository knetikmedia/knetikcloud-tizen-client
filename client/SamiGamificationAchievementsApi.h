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
#include "SamiPageResource«AchievementDefinitionResource».h"
#include "SamiPageResource«TemplateResource».h"
#include "SamiPageResource«UserAchievementGroupResource».h"
#include "SamiResult.h"
#include "SamiTemplateResource.h"
#include "SamiUserAchievementGroupResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiGamificationAchievementsApi {
public:
  SamiGamificationAchievementsApi();
  virtual ~SamiGamificationAchievementsApi();

  SamiAchievementDefinitionResource* 
  createAchievementWithCompletion(SamiAchievementDefinitionResource* achievement, void (* handler)(SamiAchievementDefinitionResource*, SamiError*));
  SamiTemplateResource* 
  createAchievementTemplateWithCompletion(SamiTemplateResource* template, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteAchievementWithCompletion(String* name, void(* handler)(SamiError*));
  void 
  deleteAchievementTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiAchievementDefinitionResource* 
  getAchievementWithCompletion(String* name, void (* handler)(SamiAchievementDefinitionResource*, SamiError*));
  SamiTemplateResource* 
  getAchievementTemplateWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getAchievementTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  IList* 
  getAchievementTriggersWithCompletion( void (* handler)(IList*, SamiError*));
  SamiPageResource«AchievementDefinitionResource»* 
  getAchievementsWithCompletion(String* filterTagset, String* filterName, Boolean* filterHidden, Boolean* filterDerived, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«AchievementDefinitionResource»*, SamiError*));
  IList* 
  getDerivedAchievementsWithCompletion(String* name, void (* handler)(IList*, SamiError*));
  SamiUserAchievementGroupResource* 
  getUserAchievementProgressWithCompletion(Integer* userId, String* achievementName, void (* handler)(SamiUserAchievementGroupResource*, SamiError*));
  SamiPageResource«UserAchievementGroupResource»* 
  getUserAchievementsProgressWithCompletion(Integer* userId, Boolean* filterAchievementDerived, String* filterAchievementTagset, String* filterAchievementName, Integer* size, Integer* page, void (* handler)(SamiPageResource«UserAchievementGroupResource»*, SamiError*));
  SamiPageResource«UserAchievementGroupResource»* 
  getUsersAchievementProgressWithCompletion(String* achievementName, Boolean* filterAchievementDerived, String* filterAchievementTagset, String* filterAchievementName, Integer* size, Integer* page, void (* handler)(SamiPageResource«UserAchievementGroupResource»*, SamiError*));
  SamiPageResource«UserAchievementGroupResource»* 
  getUsersAchievementsProgressWithCompletion(Boolean* filterAchievementDerived, String* filterAchievementTagset, String* filterAchievementName, Integer* size, Integer* page, void (* handler)(SamiPageResource«UserAchievementGroupResource»*, SamiError*));
  SamiAchievementDefinitionResource* 
  updateAchievementWithCompletion(String* name, SamiAchievementDefinitionResource* achievement, void (* handler)(SamiAchievementDefinitionResource*, SamiError*));
  SamiUserAchievementGroupResource* 
  updateAchievementProgressWithCompletion(Integer* userId, String* achievementName, SamiAchievementProgressUpdateRequest* request, void (* handler)(SamiUserAchievementGroupResource*, SamiError*));
  SamiTemplateResource* 
  updateAchievementTemplateWithCompletion(String* _id, SamiTemplateResource* template, void (* handler)(SamiTemplateResource*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiGamificationAchievementsApi_H_ */
