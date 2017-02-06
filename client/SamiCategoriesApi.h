#ifndef SamiCategoriesApi_H_
#define SamiCategoriesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiCategoryResource.h"
#include "SamiPageResource«CategoryResource».h"
#include "SamiPageResource«TemplateResource».h"
#include "SamiPageResource«string».h"
#include "SamiTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCategoriesApi {
public:
  SamiCategoriesApi();
  virtual ~SamiCategoriesApi();

  SamiCategoryResource* 
  createCategoryWithCompletion(SamiCategoryResource* category, void (* handler)(SamiCategoryResource*, SamiError*));
  SamiTemplateResource* 
  createCategoryTemplateWithCompletion(SamiTemplateResource* template, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteCategoryWithCompletion(String* _id, void(* handler)(SamiError*));
  void 
  deleteCategoryTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiPageResource«CategoryResource»* 
  getCategoriesWithCompletion(String* filterSearch, Boolean* filterActive, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«CategoryResource»*, SamiError*));
  SamiCategoryResource* 
  getCategoryWithCompletion(String* _id, void (* handler)(SamiCategoryResource*, SamiError*));
  SamiTemplateResource* 
  getCategoryTemplateWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getCategoryTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  SamiPageResource«string»* 
  getTagsWithCompletion(Integer* size, Integer* page, void (* handler)(SamiPageResource«string»*, SamiError*));
  void 
  updateCategoryWithCompletion(String* _id, SamiCategoryResource* category, void(* handler)(SamiError*));
  void 
  updateCategoryTemplateWithCompletion(String* _id, SamiTemplateResource* template, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCategoriesApi_H_ */
