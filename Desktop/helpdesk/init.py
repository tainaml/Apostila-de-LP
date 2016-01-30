class QueueAdmin(admin.ModelAdmin):
      list_display = ('title', 'slug', 'email_address', 'locale')
 +    prepopulated_fields = {"slug": ("title",)}
  
  class TicketAdmin(admin.ModelAdmin):
      list_display = ('title', 'status', 'assigned_to', 'queue', 'hidden_submitter_email',)

