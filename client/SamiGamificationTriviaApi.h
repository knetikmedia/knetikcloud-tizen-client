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
#include "SamiPageResource«ImportJobResource».h"
#include "SamiPageResource«QuestionResource».h"
#include "SamiPageResource«QuestionTemplateResource».h"
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
  addQuestionAnswersWithCompletion(String* questionId, SamiAnswerResource* answer, void (* handler)(SamiAnswerResource*, SamiError*));
  void 
  addQuestionTagWithCompletion(String* _id, String* tag, void(* handler)(SamiError*));
  Integer* 
  addTagToQuestionsBatchWithCompletion(String* tag, String* filterSearch, String* filterIdset, String* filterCategory, String* filterTag, String* filterTagset, String* filterType, Boolean* filterPublished, Long* filterImportId, void (* handler)(Integer*, SamiError*));
  SamiImportJobResource* 
  createImportJobWithCompletion(SamiImportJobResource* request, void (* handler)(SamiImportJobResource*, SamiError*));
  SamiQuestionResource* 
  createQuestionWithCompletion(SamiQuestionResource* question, void (* handler)(SamiQuestionResource*, SamiError*));
  SamiQuestionTemplateResource* 
  createQuestionTemplateWithCompletion(SamiQuestionTemplateResource* questionTemplateResource, void (* handler)(SamiQuestionTemplateResource*, SamiError*));
  void 
  deleteImportJobWithCompletion(Long* _id, void(* handler)(SamiError*));
  void 
  deleteQuestionWithCompletion(String* _id, void(* handler)(SamiError*));
  void 
  deleteQuestionAnswersWithCompletion(String* questionId, String* _id, void(* handler)(SamiError*));
  void 
  deleteQuestionTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiImportJobResource* 
  getImportJobWithCompletion(Long* _id, void (* handler)(SamiImportJobResource*, SamiError*));
  SamiPageResource«ImportJobResource»* 
  getImportJobsWithCompletion(String* filterVendor, String* filterCategory, String* filterName, String* filterStatus, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ImportJobResource»*, SamiError*));
  SamiQuestionResource* 
  getQuestionWithCompletion(String* _id, void (* handler)(SamiQuestionResource*, SamiError*));
  SamiAnswerResource* 
  getQuestionAnswerWithCompletion(String* questionId, String* _id, void (* handler)(SamiAnswerResource*, SamiError*));
  IList* 
  getQuestionAnswersWithCompletion(String* questionId, void (* handler)(IList*, SamiError*));
  IList* 
  getQuestionDeltasWithCompletion(Long* since, void (* handler)(IList*, SamiError*));
  IList* 
  getQuestionTagsWithCompletion(String* _id, void (* handler)(IList*, SamiError*));
  SamiCollection«string»* 
  getQuestionTags1WithCompletion(String* filterSearch, String* filterCategory, Long* filterImportId, void (* handler)(SamiCollection«string»*, SamiError*));
  SamiQuestionTemplateResource* 
  getQuestionTemplateWithCompletion(String* _id, void (* handler)(SamiQuestionTemplateResource*, SamiError*));
  SamiPageResource«QuestionTemplateResource»* 
  getQuestionTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«QuestionTemplateResource»*, SamiError*));
  SamiPageResource«QuestionResource»* 
  getQuestionsWithCompletion(Integer* size, Integer* page, String* order, String* filterSearch, String* filterIdset, String* filterCategory, String* filterTagset, String* filterType, Boolean* filterPublished, Long* filterImportId, void (* handler)(SamiPageResource«QuestionResource»*, SamiError*));
  Long* 
  getQuestionsCountWithCompletion(String* filterSearch, String* filterIdset, String* filterCategory, String* filterTag, String* filterTagset, String* filterType, Boolean* filterPublished, void (* handler)(Long*, SamiError*));
  SamiImportJobResource* 
  processImportJobWithCompletion(Long* _id, Boolean* publishNow, void (* handler)(SamiImportJobResource*, SamiError*));
  void 
  removeQuestionTagWithCompletion(String* _id, String* tag, void(* handler)(SamiError*));
  Integer* 
  removeTagToQuestionsBatchWithCompletion(String* tag, String* filterSearch, String* filterIdset, String* filterCategory, String* filterTag, String* filterTagset, String* filterType, Boolean* filterPublished, Long* filterImportId, void (* handler)(Integer*, SamiError*));
  SamiImportJobResource* 
  updateImportJobWithCompletion(Long* _id, SamiImportJobResource* request, void (* handler)(SamiImportJobResource*, SamiError*));
  SamiQuestionResource* 
  updateQuestionWithCompletion(String* _id, SamiQuestionResource* question, void (* handler)(SamiQuestionResource*, SamiError*));
  void 
  updateQuestionAnswerWithCompletion(String* questionId, String* _id, SamiAnswerResource* answer, void(* handler)(SamiError*));
  void 
  updateQuestionTemplateWithCompletion(String* _id, SamiQuestionTemplateResource* questionTemplateResource, void(* handler)(SamiError*));
  Integer* 
  updateQuestionsInBulkWithCompletion(SamiQuestionResource* question, String* filterSearch, String* filterIdset, String* filterCategory, String* filterTagset, String* filterType, Boolean* filterPublished, Long* filterImportId, void (* handler)(Integer*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiGamificationTriviaApi_H_ */
