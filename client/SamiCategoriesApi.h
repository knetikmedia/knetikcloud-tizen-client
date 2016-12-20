#ifndef SamiCategoriesApi_H_
#define SamiCategoriesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiCategoryResource.h"
#include "SamiPage«CategoryResource».h"
#include "SamiPage«TemplateResource».h"
#include "SamiPage«string».h"
#include "SamiTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCategoriesApi {
public:
  SamiCategoriesApi();
  virtual ~SamiCategoriesApi();

  SamiCategoryResource* 
  createCategoryUsingPOSTWithCompletion(SamiCategoryResource* category, void (* handler)(SamiCategoryResource*, SamiError*));
  SamiTemplateResource* 
  createTemplateUsingPOST2WithCompletion(SamiTemplateResource* template, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteCategoryUsingDELETEWithCompletion(String* _id, void(* handler)(SamiError*));
  void 
  deleteTemplateUsingDELETE1WithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiPage«TemplateResource»* 
  getArticleTemplatesUsingGET1WithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPage«TemplateResource»*, SamiError*));
  SamiPage«CategoryResource»* 
  getCategoriesUsingGET1WithCompletion(String* filterSearch, Boolean* filterActive, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«CategoryResource»*, SamiError*));
  SamiCategoryResource* 
  getCategoryUsingGET1WithCompletion(String* _id, void (* handler)(SamiCategoryResource*, SamiError*));
  SamiPage«string»* 
  getTagsUsingGETWithCompletion(Integer* size, Integer* page, void (* handler)(SamiPage«string»*, SamiError*));
  SamiTemplateResource* 
  getTemplateUsingGET1WithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  updateCategoryUsingPUT1WithCompletion(String* _id, SamiCategoryResource* category, void(* handler)(SamiError*));
  void 
  updateTemplateUsingPUT2WithCompletion(String* _id, SamiTemplateResource* template, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCategoriesApi_H_ */
