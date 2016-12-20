/*
 * SamiInvoiceLogEntry.h
 * 
 * 
 */

#ifndef SamiInvoiceLogEntry_H_
#define SamiInvoiceLogEntry_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiInvoiceLogEntry: public SamiObject {
public:
    SamiInvoiceLogEntry();
    SamiInvoiceLogEntry(String* json);
    virtual ~SamiInvoiceLogEntry();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInvoiceLogEntry* fromJson(String* obj);

    Long* getPDate();
    void setPDate(Long* pDate);
    Integer* getPInvoiceId();
    void setPInvoiceId(Integer* pInvoice_id);
    String* getPMessage();
    void setPMessage(String* pMessage);
    String* getPType();
    void setPType(String* pType);

private:
    Long* pDate;
Integer* pInvoice_id;
String* pMessage;
String* pType;
};

} /* namespace Swagger */

#endif /* SamiInvoiceLogEntry_H_ */
