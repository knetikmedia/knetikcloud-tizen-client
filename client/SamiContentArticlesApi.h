#ifndef SamiContentArticlesApi_H_
#define SamiContentArticlesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiArticleResource.h"
#include "SamiPageResource«ArticleResource».h"
#include "SamiPageResource«TemplateResource».h"
#include "SamiTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiContentArticlesApi {
public:
  SamiContentArticlesApi();
  virtual ~SamiContentArticlesApi();

  SamiTemplateResource* 
  createArticleTemplateUsingPOSTWithCompletion(SamiTemplateResource* articleTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiArticleResource* 
  createArticleUsingPOSTWithCompletion(SamiArticleResource* articleResource, void (* handler)(SamiArticleResource*, SamiError*));
  void 
  deleteArticleTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  void 
  deleteArticleUsingDELETEWithCompletion(String* _id, void(* handler)(SamiError*));
  SamiTemplateResource* 
  getArticleTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getArticleTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  SamiArticleResource* 
  getArticleUsingGETWithCompletion(String* _id, void (* handler)(SamiArticleResource*, SamiError*));
  SamiPageResource«ArticleResource»* 
  getArticlesUsingGETWithCompletion(String* filterCategory, String* filterTagset, String* filterTitle, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ArticleResource»*, SamiError*));
  void 
  updateArticleTemplateUsingPUTWithCompletion(String* _id, SamiTemplateResource* articleTemplateResource, void(* handler)(SamiError*));
  void 
  updateArticleUsingPUTWithCompletion(String* _id, SamiArticleResource* articleResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiContentArticlesApi_H_ */
