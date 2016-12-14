#ifndef SamiGamificationTriviaApi_H_
#define SamiGamificationTriviaApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiAnswerResource.h"
#include "SamiCollection«string».h"
#include "SamiDeltaResource.h"
#include "SamiImportJobResource.h"
#include "SamiPage«ImportJobResource».h"
#include "SamiPage«QuestionResource».h"
#include "SamiPage«QuestionTemplateResource».h"
#include "SamiQuestionResource.h"
#include "SamiQuestionTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiGamificationTriviaApi {
public:
  SamiGamificationTriviaApi();
  virtual ~SamiGamificationTriviaApi();

  SamiAnswerResource* 
  addAnswersUsingPOSTWithCompletion(String* questionId, SamiAnswerResource* answer, void (* handler)(SamiAnswerResource*, SamiError*));
  void 
  addTagUsingPOSTWithCompletion(String* _id, String* tag, void(* handler)(SamiError*));
  Integer* 
  batchAddTagUsingPOSTWithCompletion(String* tag, String* filterSearch, String* filterIdset, String* filterCategory, String* filterTag, String* filterTagset, String* filterType, Boolean* filterPublished, Long* filterImportId, void (* handler)(Integer*, SamiError*));
  Integer* 
  batchRemoveTagUsingDELETEWithCompletion(String* tag, String* filterSearch, String* filterIdset, String* filterCategory, String* filterTag, String* filterTagset, String* filterType, Boolean* filterPublished, Long* filterImportId, void (* handler)(Integer*, SamiError*));
  Integer* 
  bulkUpdateUsingPUTWithCompletion(SamiQuestionResource* question, String* filterSearch, String* filterIdset, String* filterCategory, String* filterTagset, String* filterType, Boolean* filterPublished, Long* filterImportId, void (* handler)(Integer*, SamiError*));
  Long* 
  countQuestionsUsingGETWithCompletion(String* filterSearch, String* filterIdset, String* filterCategory, String* filterTag, String* filterTagset, String* filterType, Boolean* filterPublished, void (* handler)(Long*, SamiError*));
  SamiQuestionTemplateResource* 
  createQuestionTemplateUsingPOSTWithCompletion(SamiQuestionTemplateResource* questionTemplateResource, void (* handler)(SamiQuestionTemplateResource*, SamiError*));
  SamiQuestionResource* 
  createQuestionUsingPOSTWithCompletion(SamiQuestionResource* question, void (* handler)(SamiQuestionResource*, SamiError*));
  SamiImportJobResource* 
  createUsingPOSTWithCompletion(SamiImportJobResource* request, void (* handler)(SamiImportJobResource*, SamiError*));
  void 
  deleteQuestionTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  void 
  deleteQuestionUsingDELETEWithCompletion(String* _id, void(* handler)(SamiError*));
  void 
  deleteUsingDELETEWithCompletion(Long* _id, void(* handler)(SamiError*));
  SamiAnswerResource* 
  getAnswerUsingGETWithCompletion(String* questionId, String* _id, void (* handler)(SamiAnswerResource*, SamiError*));
  IList* 
  getAnswersUsingGETWithCompletion(String* questionId, void (* handler)(IList*, SamiError*));
  SamiPage«ImportJobResource»* 
  getListUsingGET1WithCompletion(String* filterVendor, String* filterCategory, String* filterName, String* filterStatus, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«ImportJobResource»*, SamiError*));
  SamiQuestionTemplateResource* 
  getQuestionTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiQuestionTemplateResource*, SamiError*));
  SamiPage«QuestionTemplateResource»* 
  getQuestionTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPage«QuestionTemplateResource»*, SamiError*));
  SamiQuestionResource* 
  getQuestionUsingGETWithCompletion(String* _id, void (* handler)(SamiQuestionResource*, SamiError*));
  IList* 
  getQuestionsDeltaUsingGETWithCompletion(Long* since, void (* handler)(IList*, SamiError*));
  SamiPage«QuestionResource»* 
  getQuestionsUsingGETWithCompletion(Integer* size, Integer* page, String* order, String* filterSearch, String* filterIdset, String* filterCategory, String* filterTagset, String* filterType, Boolean* filterPublished, Long* filterImportId, void (* handler)(SamiPage«QuestionResource»*, SamiError*));
  IList* 
  getTagsUsingGET1WithCompletion(String* _id, void (* handler)(IList*, SamiError*));
  SamiCollection«string»* 
  getTagsUsingGET2WithCompletion(String* filterSearch, String* filterCategory, Long* filterImportId, void (* handler)(SamiCollection«string»*, SamiError*));
  SamiImportJobResource* 
  getUsingGETWithCompletion(Long* _id, void (* handler)(SamiImportJobResource*, SamiError*));
  void 
  removeAnswersUsingDELETEWithCompletion(String* questionId, String* _id, void(* handler)(SamiError*));
  void 
  removeTagUsingDELETEWithCompletion(String* _id, String* tag, void(* handler)(SamiError*));
  SamiImportJobResource* 
  startProcessUsingPOSTWithCompletion(Long* _id, Boolean* publishNow, void (* handler)(SamiImportJobResource*, SamiError*));
  void 
  updateAnswerUsingPUTWithCompletion(String* questionId, String* _id, SamiAnswerResource* answer, void(* handler)(SamiError*));
  void 
  updateQuestionTemplateUsingPUTWithCompletion(String* _id, SamiQuestionTemplateResource* questionTemplateResource, void(* handler)(SamiError*));
  SamiQuestionResource* 
  updateQuestionUsingPUTWithCompletion(String* _id, SamiQuestionResource* question, void (* handler)(SamiQuestionResource*, SamiError*));
  SamiImportJobResource* 
  updateUsingPUTWithCompletion(Long* _id, SamiImportJobResource* request, void (* handler)(SamiImportJobResource*, SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiGamificationTriviaApi_H_ */
