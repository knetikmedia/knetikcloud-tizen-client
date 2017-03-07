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
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineRulesApi {
public:
  SamiBRERuleEngineRulesApi();
  virtual ~SamiBRERuleEngineRulesApi();

  SamiBreRule* 
  createBRERuleWithCompletion(SamiBreRule* breRule, void (* handler)(SamiBreRule*, SamiError*));
  void 
  deleteBRERuleWithCompletion(String* _id, void(* handler)(SamiError*));
  String* 
  getBREExpressionAsStringWithCompletion(SamiExpression«object»* expression, void (* handler)(String*, SamiError*));
  SamiBreRule* 
  getBRERuleWithCompletion(String* _id, void (* handler)(SamiBreRule*, SamiError*));
  SamiPageResource«BreRule»* 
  getBRERulesWithCompletion(String* filterName, Boolean* filterEnabled, Boolean* filterSystem, String* filterTrigger, String* filterAction, String* filterCondition, Integer* size, Integer* page, void (* handler)(SamiPageResource«BreRule»*, SamiError*));
  void 
  setBRERuleWithCompletion(String* _id, SamiBooleanResource* enabled, void(* handler)(SamiError*));
  SamiBreRule* 
  updateBRERuleWithCompletion(String* _id, SamiBreRule* breRule, void (* handler)(SamiBreRule*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineRulesApi_H_ */
