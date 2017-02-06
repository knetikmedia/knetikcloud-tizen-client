#ifndef SamiBRERuleEngineCategoriesApi_H_
#define SamiBRERuleEngineCategoriesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiBreCategoryResource.h"
#include "SamiPageResource«BreCategoryResource».h"
#include "SamiPageResource«TemplateResource».h"
#include "SamiTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineCategoriesApi {
public:
  SamiBRERuleEngineCategoriesApi();
  virtual ~SamiBRERuleEngineCategoriesApi();

  SamiTemplateResource* 
  createBRECategoryTemplateWithCompletion(SamiTemplateResource* template, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteBRECategoryTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiPageResource«BreCategoryResource»* 
  getBRECategoriesWithCompletion(Integer* size, Integer* page, void (* handler)(SamiPageResource«BreCategoryResource»*, SamiError*));
  SamiBreCategoryResource* 
  getBRECategoryWithCompletion(String* name, void (* handler)(SamiBreCategoryResource*, SamiError*));
  SamiTemplateResource* 
  getBRECategoryTemplateWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getBRECategoryTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  void 
  updateBRECategoryWithCompletion(String* name, SamiBreCategoryResource* category, void(* handler)(SamiError*));
  void 
  updateBRECategoryTemplateWithCompletion(String* _id, SamiTemplateResource* template, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineCategoriesApi_H_ */
