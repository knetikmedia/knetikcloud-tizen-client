#ifndef SamiBRERuleEngineCategoriesApi_H_
#define SamiBRERuleEngineCategoriesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiBreCategoryResource.h"
#include "SamiPage«BreCategoryResource».h"
#include "SamiPage«TemplateResource».h"
#include "SamiTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineCategoriesApi {
public:
  SamiBRERuleEngineCategoriesApi();
  virtual ~SamiBRERuleEngineCategoriesApi();

  SamiTemplateResource* 
  createTemplateUsingPOST1WithCompletion(SamiTemplateResource* template, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiPage«BreCategoryResource»* 
  getCategoriesUsingGETWithCompletion(Integer* size, Integer* page, void (* handler)(SamiPage«BreCategoryResource»*, SamiError*));
  SamiBreCategoryResource* 
  getCategoryUsingGETWithCompletion(String* name, void (* handler)(SamiBreCategoryResource*, SamiError*));
  SamiTemplateResource* 
  getTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPage«TemplateResource»* 
  getTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPage«TemplateResource»*, SamiError*));
  void 
  updateCategoryUsingPUTWithCompletion(String* name, SamiBreCategoryResource* category, void(* handler)(SamiError*));
  void 
  updateTemplateUsingPUT1WithCompletion(String* _id, SamiTemplateResource* template, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineCategoriesApi_H_ */
