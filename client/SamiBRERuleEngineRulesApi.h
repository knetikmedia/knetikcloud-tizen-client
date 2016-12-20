#ifndef SamiBRERuleEngineRulesApi_H_
#define SamiBRERuleEngineRulesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiBooleanResource.h"
#include "SamiBreRule.h"
#include "SamiExpression«object».h"
#include "SamiPageResource«BreRule».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineRulesApi {
public:
  SamiBRERuleEngineRulesApi();
  virtual ~SamiBRERuleEngineRulesApi();

  String* 
  convertExpressionToStringUsingPOSTWithCompletion(SamiExpression«object»* expression, void (* handler)(String*, SamiError*));
  SamiBreRule* 
  createRuleUsingPOSTWithCompletion(SamiBreRule* breRule, void (* handler)(SamiBreRule*, SamiError*));
  void 
  deleteRuleUsingDELETEWithCompletion(String* _id, void(* handler)(SamiError*));
  void 
  enableRuleUsingPUTWithCompletion(String* _id, SamiBooleanResource* enabled, void(* handler)(SamiError*));
  SamiBreRule* 
  getRuleUsingGETWithCompletion(String* _id, void (* handler)(SamiBreRule*, SamiError*));
  SamiPageResource«BreRule»* 
  getRulesUsingGETWithCompletion(String* filterName, Boolean* filterEnabled, Boolean* filterSystem, String* filterTrigger, String* filterAction, String* filterCondition, Integer* size, Integer* page, void (* handler)(SamiPageResource«BreRule»*, SamiError*));
  void 
  updateRuleUsingPUTWithCompletion(String* _id, SamiBreRule* breRule, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineRulesApi_H_ */
