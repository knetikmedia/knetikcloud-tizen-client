/*
 * SamiDeltaResource.h
 * 
 * 
 */

#ifndef SamiDeltaResource_H_
#define SamiDeltaResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiDeltaResource: public SamiObject {
public:
    SamiDeltaResource();
    SamiDeltaResource(String* json);
    virtual ~SamiDeltaResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiDeltaResource* fromJson(String* obj);

    String* getPCategoryId();
    void setPCategoryId(String* pCategory_id);
    String* getPMediaType();
    void setPMediaType(String* pMedia_type);
    String* getPQuestionId();
    void setPQuestionId(String* pQuestion_id);
    String* getPState();
    void setPState(String* pState);
    IList* getPTags();
    void setPTags(IList* pTags);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    String* pCategory_id;
String* pMedia_type;
String* pQuestion_id;
String* pState;
IList* pTags;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiDeltaResource_H_ */
