/*
 * SamiQuestionResource.h
 * 
 * 
 */

#ifndef SamiQuestionResource_H_
#define SamiQuestionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiAnswerResource.h"
#include "SamiNestedCategory.h"
#include "SamiProperty.h"
using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiQuestionResource: public SamiObject {
public:
    SamiQuestionResource();
    SamiQuestionResource(String* json);
    virtual ~SamiQuestionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiQuestionResource* fromJson(String* obj);

    HashMap* getPAdditionalProperties();
    void setPAdditionalProperties(HashMap* pAdditional_properties);
    IList* getPAnswers();
    void setPAnswers(IList* pAnswers);
    SamiNestedCategory* getPCategory();
    void setPCategory(SamiNestedCategory* pCategory);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Integer* getPDifficulty();
    void setPDifficulty(Integer* pDifficulty);
    String* getPId();
    void setPId(String* pId);
    Long* getPImportId();
    void setPImportId(Long* pImport_id);
    Long* getPPublishedDate();
    void setPPublishedDate(Long* pPublished_date);
    SamiProperty* getPQuestion();
    void setPQuestion(SamiProperty* pQuestion);
    String* getPSource1();
    void setPSource1(String* pSource1);
    String* getPSource2();
    void setPSource2(String* pSource2);
    IList* getPTags();
    void setPTags(IList* pTags);
    String* getPTemplate();
    void setPTemplate(String* pTemplate);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);
    String* getPVendor();
    void setPVendor(String* pVendor);

private:
    HashMap* pAdditional_properties;
IList* pAnswers;
SamiNestedCategory* pCategory;
Long* pCreated_date;
Integer* pDifficulty;
String* pId;
Long* pImport_id;
Long* pPublished_date;
SamiProperty* pQuestion;
String* pSource1;
String* pSource2;
IList* pTags;
String* pTemplate;
Long* pUpdated_date;
String* pVendor;
};

} /* namespace Swagger */

#endif /* SamiQuestionResource_H_ */
