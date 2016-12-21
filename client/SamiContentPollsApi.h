#ifndef SamiContentPollsApi_H_
#define SamiContentPollsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPageResource«PollResource».h"
#include "SamiPageResource«TemplateResource».h"
#include "SamiPollResource.h"
#include "SamiPollResponseResource.h"
#include "SamiTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiContentPollsApi {
public:
  SamiContentPollsApi();
  virtual ~SamiContentPollsApi();

  SamiPollResponseResource* 
  answerPollUsingPOSTWithCompletion(String* _id, String* answerKey, void (* handler)(SamiPollResponseResource*, SamiError*));
  SamiTemplateResource* 
  createPollTemplateUsingPOSTWithCompletion(SamiTemplateResource* pollTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPollResource* 
  createPollUsingPOSTWithCompletion(SamiPollResource* pollResource, void (* handler)(SamiPollResource*, SamiError*));
  void 
  deletePollTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  void 
  deletePollUsingDELETEWithCompletion(String* _id, void(* handler)(SamiError*));
  SamiPollResponseResource* 
  getPollAnswerUsingGETWithCompletion(String* _id, void (* handler)(SamiPollResponseResource*, SamiError*));
  SamiTemplateResource* 
  getPollTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getPollTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  SamiPollResource* 
  getPollUsingGETWithCompletion(String* _id, void (* handler)(SamiPollResource*, SamiError*));
  SamiPageResource«PollResource»* 
  getPollsUsingGETWithCompletion(String* filterCategory, String* filterTagset, String* filterText, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«PollResource»*, SamiError*));
  void 
  updatePollTemplateUsingPUTWithCompletion(String* _id, SamiTemplateResource* pollTemplateResource, void(* handler)(SamiError*));
  void 
  updatePollUsingPUTWithCompletion(String* _id, SamiPollResource* pollResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiContentPollsApi_H_ */
