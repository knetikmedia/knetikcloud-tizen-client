/*
 * SamiImportJobOutputResource.h
 * 
 * 
 */

#ifndef SamiImportJobOutputResource_H_
#define SamiImportJobOutputResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiImportJobOutputResource: public SamiObject {
public:
    SamiImportJobOutputResource();
    SamiImportJobOutputResource(String* json);
    virtual ~SamiImportJobOutputResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiImportJobOutputResource* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    Long* getPLineNumber();
    void setPLineNumber(Long* pLine_number);

private:
    String* pDescription;
Long* pLine_number;
};

} /* namespace Swagger */

#endif /* SamiImportJobOutputResource_H_ */
