/*
 * SamiImportJobResource.h
 * 
 * 
 */

#ifndef SamiImportJobResource_H_
#define SamiImportJobResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiImportJobOutputResource.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiImportJobResource: public SamiObject {
public:
    SamiImportJobResource();
    SamiImportJobResource(String* json);
    virtual ~SamiImportJobResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiImportJobResource* fromJson(String* obj);

    String* getPCategoryId();
    void setPCategoryId(String* pCategory_id);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    Long* getPId();
    void setPId(Long* pId);
    String* getPName();
    void setPName(String* pName);
    IList* getPOutput();
    void setPOutput(IList* pOutput);
    Long* getPRecordCount();
    void setPRecordCount(Long* pRecord_count);
    String* getPStatus();
    void setPStatus(String* pStatus);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);
    String* getPUrl();
    void setPUrl(String* pUrl);
    String* getPVendor();
    void setPVendor(String* pVendor);

private:
    String* pCategory_id;
Long* pCreated_date;
Long* pId;
String* pName;
IList* pOutput;
Long* pRecord_count;
String* pStatus;
Long* pUpdated_date;
String* pUrl;
String* pVendor;
};

} /* namespace Swagger */

#endif /* SamiImportJobResource_H_ */
