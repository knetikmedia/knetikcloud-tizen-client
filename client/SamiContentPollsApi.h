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
#include "SamiResult.h"
#include "SamiTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiContentPollsApi {
public:
  SamiContentPollsApi();
  virtual ~SamiContentPollsApi();

  SamiPollResponseResource* 
  answerPollWithCompletion(String* _id, String* answerKey, void (* handler)(SamiPollResponseResource*, SamiError*));
  SamiPollResource* 
  createPollWithCompletion(SamiPollResource* pollResource, void (* handler)(SamiPollResource*, SamiError*));
  SamiTemplateResource* 
  createPollTemplateWithCompletion(SamiTemplateResource* pollTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deletePollWithCompletion(String* _id, void(* handler)(SamiError*));
  void 
  deletePollTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiPollResource* 
  getPollWithCompletion(String* _id, void (* handler)(SamiPollResource*, SamiError*));
  SamiPollResponseResource* 
  getPollAnswerWithCompletion(String* _id, void (* handler)(SamiPollResponseResource*, SamiError*));
  SamiTemplateResource* 
  getPollTemplateWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getPollTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  SamiPageResource«PollResource»* 
  getPollsWithCompletion(String* filterCategory, String* filterTagset, String* filterText, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«PollResource»*, SamiError*));
  SamiPollResource* 
  updatePollWithCompletion(String* _id, SamiPollResource* pollResource, void (* handler)(SamiPollResource*, SamiError*));
  SamiTemplateResource* 
  updatePollTemplateWithCompletion(String* _id, SamiTemplateResource* pollTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiContentPollsApi_H_ */
