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

  SamiArticleResource* 
  createArticleWithCompletion(SamiArticleResource* articleResource, void (* handler)(SamiArticleResource*, SamiError*));
  SamiTemplateResource* 
  createArticleTemplateWithCompletion(SamiTemplateResource* articleTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteArticleWithCompletion(String* _id, void(* handler)(SamiError*));
  void 
  deleteArticleTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiArticleResource* 
  getArticleWithCompletion(String* _id, void (* handler)(SamiArticleResource*, SamiError*));
  SamiTemplateResource* 
  getArticleTemplateWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getArticleTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  SamiPageResource«ArticleResource»* 
  getArticlesWithCompletion(String* filterCategory, String* filterTagset, String* filterTitle, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ArticleResource»*, SamiError*));
  void 
  updateArticleWithCompletion(String* _id, SamiArticleResource* articleResource, void(* handler)(SamiError*));
  void 
  updateArticleTemplateWithCompletion(String* _id, SamiTemplateResource* articleTemplateResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiContentArticlesApi_H_ */
