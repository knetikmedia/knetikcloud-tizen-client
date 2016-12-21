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
  createAchievementUsingPOSTWithCompletion(SamiAchievementDefinitionResource* achievement, void (* handler)(SamiAchievementDefinitionResource*, SamiError*));
  SamiTemplateResource* 
  createTemplateUsingPOSTWithCompletion(SamiTemplateResource* template, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteAchievementTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  void 
  deleteAchievementUsingDELETEWithCompletion(String* name, void(* handler)(SamiError*));
  IList* 
  findAllByGroupNameUsingGETWithCompletion(String* name, void (* handler)(IList*, SamiError*));
  SamiTemplateResource* 
  getAchievementTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getAchievementTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  SamiAchievementDefinitionResource* 
  getAchievementUsingGETWithCompletion(String* name, void (* handler)(SamiAchievementDefinitionResource*, SamiError*));
  SamiPageResource«AchievementDefinitionResource»* 
  getAchievementsUsingGETWithCompletion(String* filterTagset, String* filterName, Boolean* filterHidden, Boolean* filterDerived, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«AchievementDefinitionResource»*, SamiError*));
  SamiPageResource«UserAchievementGroupResource»* 
  getAllUserProgressForAchievementUsingGETWithCompletion(String* achievementName, Boolean* filterAchievementDerived, String* filterAchievementTagset, Boolean* filterAchievementHidden, Integer* size, Integer* page, void (* handler)(SamiPageResource«UserAchievementGroupResource»*, SamiError*));
  SamiPageResource«UserAchievementGroupResource»* 
  getAllUserProgressUsingGETWithCompletion(Boolean* filterAchievementDerived, String* filterAchievementTagset, String* filterAchievementName, Boolean* filterAchievementHidden, Integer* size, Integer* page, void (* handler)(SamiPageResource«UserAchievementGroupResource»*, SamiError*));
  IList* 
  getAvailableTriggersUsingGETWithCompletion( void (* handler)(IList*, SamiError*));
  SamiUserAchievementGroupResource* 
  getUserProgressForAchievementUsingGETWithCompletion(Integer* userId, String* achievementName, void (* handler)(SamiUserAchievementGroupResource*, SamiError*));
  SamiPageResource«UserAchievementGroupResource»* 
  getUserProgressUsingGETWithCompletion(Integer* userId, Boolean* filterAchievementDerived, String* filterAchievementTagset, String* filterAchievementName, Boolean* filterAchievementHidden, Integer* size, Integer* page, void (* handler)(SamiPageResource«UserAchievementGroupResource»*, SamiError*));
  void 
  updateAchievementUsingPUTWithCompletion(String* name, SamiAchievementDefinitionResource* achievement, void(* handler)(SamiError*));
  SamiUserAchievementGroupResource* 
  updateProgressUsingPUTWithCompletion(Integer* userId, String* achievementName, SamiAchievementProgressUpdateRequest* request, void (* handler)(SamiUserAchievementGroupResource*, SamiError*));
  void 
  updateTemplateUsingPUTWithCompletion(String* _id, SamiTemplateResource* template, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiGamificationAchievementsApi_H_ */
